<!--Creator: Eli Hughes
    File: admin_header.inc
    Purpose: Requires 'admin.inc' and 'redirect.inc'. If 'isadmin() == false', redirect to login.html
-->

<?php
require('admin.inc');
require('redirect.inc');
if(isadmin() == false) redirect('login.html');
?>