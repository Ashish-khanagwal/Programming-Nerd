-- ⚙️ MODULE 3 — Functions, Closures, and Higher Order Magic

-- FUNCTIONS: The Building Blocks
local function greet(name)
	print("hello " .. name)
end
greet("Ashish")

-- Same function, different syntax:
local greet = function(name)
	print("Hello " .. name)
end
greet("Ashish")

-- FUNCTIONS RETURN VALUES
local function add(a, b)
	return a + b
end
print(add(4, 5))

local function stats(a, b)
	return a + b, a * b
end

local sum, prod = stats(4, 5)
print("Sum: " .. sum)
print("Multiplication: " .. prod)

-- ANONYMOUS FUNCTIONS (LAMBDAS)

-- Anonymous Function Assigned to a Variable

local say = function(msg)
	print("Message: ", msg)
end
say("Hello Ashish")

print("")
-- Anonymous Function Passed to table.sort
local nums = { 5, 4, 3, 2, 1, 7, 9, 8, 10 }

table.sort(nums, function(a, b)
	return a < b
end)

print("Sorted numbers")
for _, v in ipairs(nums) do
	print(v)
end
