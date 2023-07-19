# Write your MySQL query statement below

select u.product_id, round(sum(u.units*p.price)/sum(u.units),2) as average_price from unitssold as u left join prices as p on u.product_id = p.product_id and (u.purchase_date BETWEEN p.start_date AND p.end_date )group by u.product_id