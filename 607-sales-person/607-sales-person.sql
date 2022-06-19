/* Write your T-SQL query statement below */
select name
from SalesPerson
except
Select sp.name 
from Orders as o inner join SalesPerson as sp on o.sales_id = sp.sales_id inner join Company as c on o.com_id = c.com_id
where c.name = 'RED'