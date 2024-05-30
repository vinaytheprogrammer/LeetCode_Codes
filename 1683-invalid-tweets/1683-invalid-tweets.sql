# Write your MySQL query statement below
# select tweet_id from tweets where len(content) >15;
select tweet_id from tweets where CHAR_LENGTH(content) >15;