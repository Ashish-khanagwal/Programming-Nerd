-- Higher order functions
-- Functions that take other functions OR return functions.
print("Simple higher order function")
local function repeat_n(n, fn)
	for i = 1, n do
		fn(i)
	end
end

repeat_n(3, function(i)
	print("Call", i)
end)

print("")

-- map()
-- A map function transforms every element in a list
print("HOF with map()")
local function map(tb, fn)
	local result = {}
	for i, v in ipairs(tb) do
		result[i] = fn(v)
	end
	return result
end

local nums = { 1, 2, 3, 4 }

local doubled = map(nums, function(x)
	return x * 2
end)

for _, v in ipairs(doubled) do
	print(v)
end
