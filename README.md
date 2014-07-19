# mruby-fizzbuzz   [![Build Status](https://travis-ci.org/ore-public/mruby-fizzbuzz.png?branch=master)](https://travis-ci.org/ore-public/mruby-fizzbuzz)
By extending the Array class and added fizzbuzz method.

## install by mrbgems 
- add conf.gem line to `build_config.rb` 

```ruby
MRuby::Build.new do |conf|

    # ... (snip) ...

    conf.gem :git => 'https://github.com/ore-public/mruby-fizzbuzz.git'
end
```
## example 
```ruby
[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15].fizzbuzz
#=> [1, 2, "Fizz", 4, "Buzz", "Fizz", 7, 8, "Fizz", "Buzz", 11, "Fizz", 13, 14, "FizzBuzz"]
```

## License
under the MIT License:
- see LICENSE file
