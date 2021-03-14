<!--File: redirect.inc
	Purpose: Contains function 'redirect' which will load a provided url
-->

<?php
function redirect($url) {
		header('Location: '.$url);
		die("<html>
			<meta http-equiv='refresh' content='0; $url'>
			<body onload=\"location.replace('$url');\">
			<a href='$url'>$url</a>
			</body></html>");
}
?>
