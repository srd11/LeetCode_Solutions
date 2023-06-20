SELECT name 
FROM customer
WHERE coalesce(referee_id,0)<> 2 
