/* Write your T-SQL query statement below */
select sell_date, count(sell_date) as num_sold, STRING_AGG(product, ',') WITHIN GROUP (ORDER BY product ASC) as products 
from (select *
    from Activities 
    group by sell_date, product) as Activities
group by sell_date 


