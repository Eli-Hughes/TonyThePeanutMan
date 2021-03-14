<!--Creator: Eli Hughes
    File: db.inc
    Purpose: Establishes a connection with the website's MySQL database. Also, provides 'get_product' function
             which returns the Product table row for a given Product id.
-->

<?php
// Need to replace username, password, and database with applicable values
$db=new mysqli('localhost', 'username', 'password', 'database');
if($db->connect_error) die("DB Fail: ".$db->connect_error);

function get_product($id) {
	global $db;
    $stmt = $db->prepare("select * from Products where id=?");
    $stmt->bind_param('i', $id);
    if(!$stmt->execute()) return null;
    if(!$result = $stmt->get_result()) return null;
    if(!$row = $result->fetch_object()) return null;
    return $row;
}
    
?>