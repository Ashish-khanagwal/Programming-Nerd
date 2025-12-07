-- Lua variables are global by default, so we should use local always.
-- Globals -> very slow + bad practice

local x = 10
local name = "Ashish"
local is_eligible = true
local age = 24

print(type(x)) --> number
print(type(name)) --> string
print(type(is_eligible)) --> boolean
print(type(age)) --> number

-- nil destroys varaibles, for example see below:-
x = nil --> delted the variable

print(x) --> nil

-- PRINTING
print("hello world!")

-- CONCATENATION
print("Lua versoin:" .. _VERSION)

-- CONTROL FLOW (IF, FOR, WHILE)

if age > 18 then
	print("Can vote")
elseif age == 18 then
	print("Can vote")
else
	print("can't vote")
end

-- Only nil and false are the falsy values other than these 0, "", {} all are true values
if 0 then
	print("0 is true!")
end

-- FOR LOOP (Numeric)
for i = 1, 5 do
	print(i)
end

print("")

for i = 1, 10, 2 do
	print(i)
end

print("")

for i = 10, 1, -1 do
	print(i)
end

-- Lua loops are very fast, use everywhere from gaming engines to neovim to redis scripting
print("")
-- WHILE LOOP
local i = 10

while i > 0 do
	print(i)
	i = i - 1
end

print("")

-- REAPEAT...UNTIL LOOP (LUA's special loop)
local j = 0
repeat
	j = j + 1
	print(j)
until j == 5

-- Use [[...]] To write multi-line string.
local intro = [[
Hi, my name is Ashish Khanagwal
I am an AI and Data Engineer.
I am gonna be the richest in my entire bloodline and my upcoming 10 generattions
will just enjoy their life becuase i will earn that much money and respect of people.
I will build NGOs to help needy people.
]]

print(intro)

-- not is the negation keyword
if not is_eligible then
	print("can't watch")
else
	print("can watch")
end

-- Lua's index start at 1 not 0.
