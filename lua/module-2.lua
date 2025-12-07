-- TABLES: THE GOD OBJECT OF LUA
-- If you master tables, you master Lua

-- Everything you will ever build in Lua (including Neovim configs + plugins) is based on tables + functions.

-- TABLES AS ARRAYS (LISTS)
local fruits = { "apple", "banana", "cherry" }
print(fruits[1])
print(fruits[2])

-- Lua arrays alwasy start at index 1 not 0.
-- This is because Lua is heavily used in non-CS contexts (embedded, games, graphics, etc.) where 1-based indexing is natural.

-- Insert new elements
table.insert(fruits, "dragonfruit")
print(fruits[4])

-- Append manually:
fruits[#fruits + 1] = "mango"
print(fruits[5])
-- #table gives length (but only for array-like tables)

-- Removing element
table.remove(fruits, 2)

for i, v in ipairs(fruits) do
	print("Index " .. i .. ": " .. v)
end

-- Remove the element at index 2 by setting it to nil
fruits[3] = nil
for i, v in ipairs(fruits) do
	print("Index " .. i .. ": " .. v)
end

-- Iterate

for i, v in ipairs(fruits) do
	print(i, v)
end

-- ipairs → iterates sequential keys (1,2,3…) until a nil is found

-- TABLES AS DICTIONARIES (KEY–VALUE)
local user = {
	name = "Ashish",
	age = 24,
	nerd = true,
}

print(user.name)
print(user.age)

-- Adding values
user.country = "India"

-- Deleting values
user.nerd = nil

print(user.country)
print(user.nerd)

-- Check if key exists:
if user.name then
	print("Name exists")
end

-- MIXED TABLES (KEYS + ARRAY CONTENT)
local data = {
	"virat kohli",
	"One down batter",
	centuries = 84,
	captain = false,
}

print(data[1])
print(data.centuries)

-- NESTED TABLES (JSON-LIKE STRUCTURES)
-- Lua tables can nest infinitely:

local data = {
	name = "Ashish",
	age = 24,
	skills = {
		language = { "Python", "C", "Lua" },
		experience = {
			years = 2,
			level = "intermediate",
		},
	},
}

print(data.skills.language[1])
print(data.skills.experience.years)
