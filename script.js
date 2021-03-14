// Creator: Eli Hughes
// File: script.js
// Purpose: script used by 'order.html' which verifies information provided by user when filling out
//          an order form

function submitHandler() {

    var firstName = document.getElementById('firstName');
	var lastName = document.getElementById('lastName');
	var address = document.getElementById('address');
	var city = document.getElementById('city');
	var state = document.getElementById('state');
	var zip = document.getElementById('zip');
	var phone = document.getElementById('phone');
	var email = document.getElementById('email');	
	var cardNumber = document.getElementById('cardNumber');
	var securityCode = document.getElementById('securityCode');
	var expirationM = document.getElementById('expirationM');
	var expirationY = document.getElementById('expirationY');
	var errorMsg = document.getElementById('orderErrMsg');
	var errorMsg2 = document.getElementById('orderErrMsg2');

	var ok = true;

    if (firstName != null){
        if (firstName.value == '' || firstName.value == 'First Name'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;       
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (lastName != null){
        if (lastName.value == '' || lastName.value == 'Last Name'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (address != null){
        if (address.value == '' || address.value == 'Address'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (city != null){
        if (city.value == '' || city.value == 'City'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (state != null){
        if (state.value == '' || state.value == 'State'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (zip != null){
        if (zip.value == '' || zip.value == 'Zipcode'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }
	
	if (phone != null){
        if (phone.value == '' || phone.value == 'Phone Number'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (email != null){
        if (email.value == '' || email.value == 'Email'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (cardNumber != null){
        if (cardNumber.value == '' || cardNumber.value == 'Credit Card'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (securityCode != null){
        if (securityCode.value == '' || securityCode.value == 'Security Code'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } else {
        	errorMsg.style.display = 'none';
        }
    }

	if (expirationM != null){
        if (expirationM.value == '' || expirationM.value == 'Expiration Month'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } 
    	if (expirationM.value < 1 || expirationM.value > 12){
        	if (errorMsg2 != null){
            	errorMsg2.style.display = 'block';            	
            }
        	ok = false;        	
        } else {
            errorMsg2.style.display = 'none';
        }
    }

	if (expirationY != null){
        if (expirationY.value == '' || expirationY.value == 'Expiration Year'){
        	if (errorMsg != null){
            	errorMsg.style.display = 'block';
            }
            ok = false;
        } 
    	if (expirationY.value < 2019 || expirationY.value > 2100){
        	if (errorMsg2 != null){
            	errorMsg2.style.display = 'block';            	
            }
        	ok = false;        	
        } else {
            errorMsg2.style.display = 'none';
        }
    }

	return ok;
}