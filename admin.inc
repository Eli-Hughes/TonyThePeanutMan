<!--Creator: Eli Hughes
    File: admin.inc
    Purpose: Begins and ends sessions based off of username and password. Provides 'isadmin()' function
             for checking if the admin session exists or not.
 -->

<?php
session_start();
if(!isset($_SESSION['user'])) $_SESSION['user'] = null;
if(!empty($_POST['user']) && (strtolower($_POST['user']) == 'admin') && !empty($_POST['pass']) && ($_POST['pass'] == '123qwe')) $_SESSION['user'] = 'admin';
else $_SESSION['user'] = null;

function isadmin(){
	if(!empty($_SESSION['user'])) return true;
    else return false;
}
?>