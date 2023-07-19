# Write your MySQL query statement below

# select r.contest_id,round(count(r.user_id)/ count(u.user_id) * 100,2) as percentage from users as u join register as r;

SELECT contest_id
    , ROUND(COUNT(DISTINCT user_id) * 100 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Register 
GROUP BY contest_id
    ORDER BY percentage DESC, contest_id

