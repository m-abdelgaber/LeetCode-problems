/* Write your T-SQL query statement below */
select u.user_id as buyer_id, u.join_date, count(o.order_id) as orders_in_2019
from Users u inner join Orders o on u.user_id = o.buyer_id inner join Items i on i.item_id = o.item_id
where o.order_date >'2018-12-31' and o.order_date < '2020-01-01'
group by u.user_id, u.join_date

union 

select user_id as buyer_id, join_date, 0 as orders_in_2019
from Users
Where user_id not in (
    select u.user_id as user_id
    from Users u inner join Orders o on u.user_id = o.buyer_id inner join Items i on i.item_id = o.item_id
    where o.order_date >'2018-12-31' and o.order_date < '2020-01-01'
    group by u.user_id, u.join_date)