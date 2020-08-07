#!/usr/bin/lua
local types = (...) or {}
assert(lqt.classes.insert, 'module lqt.classes not loaded')
local function add_class(class)
	lqt.classes.insert(class, true)
end
return types
