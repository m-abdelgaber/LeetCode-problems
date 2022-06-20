/* Write your T-SQL query statement below */

select s.stock_name, (s.gain - b.loss) as capital_gain_loss 
from
(select stock_name, sum(price) as loss
from Stocks
group by stock_name, operation
having operation = 'Buy'
) as b inner join
(select stock_name, sum(price) as gain
from Stocks
group by stock_name, operation
having operation = 'Sell') as s
on s.stock_name = b.stock_name