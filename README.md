# TonyThePeanutMan
Dynamic Web Application for selling products online (using HTML/CSS, Javascript, PHP, and SQL)

A FEW NOTES:
- The current file structure (minus the Product_Images folder, which can be removed) should remain the same if you wish to locally host this application
- The Product_Pictures folder contains sample pictures for sample products that can be added to the website's database
- The website's database should be a MySQL database with the same schema that is detailed in this repo's wiki
- As products are added to the website's database (see wiki for database schema) by an adminstrator through the administrator page, the adminstrator
  uploads a new picture for the new product that is being added. The picture, unlike the name, price, and description, is not stored in the database
  but is stored in the top level directory with the naming scheme - product.productID.jpg. If this product is deleted in the future, then the product
  image is removed from the file structure as well.
- In line 9 of 'db.inc', you need to replace 'username', 'password', and 'database' with applicable values
