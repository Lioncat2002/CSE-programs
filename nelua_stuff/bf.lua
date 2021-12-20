require "string"
require "C.stdio"
local src="++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++."

local stack:[3000]uint8
local ptr:uint8=0


for i=1, #src do
    local c=src:sub(i,i)
    if c=='>' then
        ptr=ptr+1
    elseif c=='<' then
        ptr=ptr-1
    elseif c=='+' then
        stack[ptr]=stack[ptr]+1
        

    elseif c=='-' then
        stack[ptr]=stack[ptr]-1
    elseif c=='.' then
        C.putchar(stack[ptr])
       
    elseif c==',' then
        stack[ptr]=C.getchar()
    elseif c=='[' then
        continue
    elseif c==']' and stack[ptr]>0 then
        
            local loop=0
            while (loop>0) do
                i=i-1
                c=src:sub(i,i)
                if c=='[' then
                    loop=loop+1
                elseif c==']' then
                    loop=loop-1
                end
            end
        
    end

end
