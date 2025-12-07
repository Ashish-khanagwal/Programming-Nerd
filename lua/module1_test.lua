local name = "Ashish"
local score = 0

print("Welcome, " .. name)

for i = 1, 5 do
	score = score + i
end
print("value of score is: ", score)

if score > 10 then
	print("Score is high:", score)
else
	print("Score is low:", score)
end

local x = 0
repeat
	x = x + 1
	print("Counting:", x)
until x == 3
