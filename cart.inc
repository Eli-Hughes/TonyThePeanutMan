<!--Creator: Eli Hughes
    File: cart.inc
    Purpose: Saves a user's cart data inside of a cookie. Provides functions for adding, updating, and validating a user's
             cart cookie. Also provides function 'cart_table()' for making an html form which shows current products, their 
             quantities, and their total price in the user's cart (user can update quantities and then submit form).
-->

<?php
// Load the cart from the cookie
if(!empty($_COOKIE['cart'])) $cart = unserialize($_COOKIE['cart']);
else $cart = array();

// Make sure the cart is an array
if(!is_array($cart)) $cart = array();

// Validate the cart
cart_validate();

//Handle adding a new item
if(!empty($_GET['qty']) && !empty($_GET['product']))
	cart_add($_GET['qty'], $_GET['product']);

// Handle quantity updates
cart_update();

// Set the cookie for cart
setcookie('cart', serialize($cart));

function cart_add($qty, $product){
	global $cart;
    foreach($cart as $i=>$row) {
    	if($row['product'] == $product) {
        	$cart[$i]['qty'] += $qty;
            $qty = 0; // This keeps from adding a new row
        }
    }
    if($qty > 0) $cart[] = array('qty'=>$qty, 'product'=>$product);
}

function cart_table() {
	global $cart;
    print "<form action='order.html'>";
    print "<table id='cart'>";
    foreach($cart as $i=>$row) {
    	$product = get_product($row['product']);
        if($product == null) continue;
    	print "<tr>";
        print "<td>";
        print "<input type='number' class='quantity' name='qty".$row['product']."' value='".$row['qty']."'>";
        print "</td>";
        print "<td>".$product->name."</td>";
        print "<td>$";
        print number_format($row['qty'] * $product->price, 2);
        print "</td>";
        print "</tr>";
    }
    print "<tr><td id='updateQuantities' colspan='3'>";
    print "<button type='submit' id='updateQuantitiesBtn'>Update Quantities</button>";
    print "</td></tr>";
    print "</table>";
    print "</form>";
}

function cart_update() {
	global $cart;
    foreach($cart as $i=>$row) {
    	$field = 'qty'.$row['product'];
        if(!empty($_GET[$field])) {
        	if($_GET[$field] > 0) $cart[$i]['qty'] = $_GET[$field];
           	else unset($cart[$i]);
        }
    }
}

function cart_validate() {
	global $cart;
    if(!is_array($cart)) $cart = array();
    
    foreach($cart as $i=>$row) {
    	// Get rid of rows that aren't qty/item pairs
    	if(empty($row['qty']) || empty($row['product']))
    		unset($cart[$i]);
        
    	// Get rid of rows with zero/negative quantity
    	elseif($row['qty'] <= 0)
    		unset($cart[$i]);
        
    	// Get rid of rows where product isn't in the database
    	else {
    		$product = get_product($row['product']);
        	if($product == null) unset($cart[$i]);
        }
    }    
}
?>
