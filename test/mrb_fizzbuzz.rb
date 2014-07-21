##  
## FizzBuzz Test
##

assert("Array#fizzbuzz") do
  array = (1..16).to_a
  assert_equal(
    [1,2,'Fizz',4,'Buzz','Fizz',7,8,'Fizz','Buzz',11,'Fizz',13,14,'FizzBuzz',16],
    array.fizzbuzz)
end

assert("Array#fizzbuzz2") do
  array = (1..16).to_a
  assert_equal(
    [1,2,'Fizz',4,'Buzz','Fizz',7,8,'Fizz','Buzz',11,'Fizz',13,14,'FizzBuzz',16],
    array.fizzbuzz2)
end

