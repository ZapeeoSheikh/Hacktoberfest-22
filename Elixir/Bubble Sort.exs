defmodule Bubble do
   def sort(list) do
     list
       |> do_sort([])
       |> Enum.each(&(IO.puts(&1)))
   end

   def do_sort([ first | [second | tail] ], templist) do
     if( first > second ) do
       do_sort([first] ++ tail, templist ++ [second])
     else
       do_sort([second] ++ tail, templist ++ [first])
     end
   end

   def do_sort([ first | []], templist) do
     if is_ordered(templist ++ [first]) do
       templist ++ [first]
    else
      do_sort(templist ++ [first], [])
    end
   end

   def is_ordered([ _head | [] ]) do
     true
   end

   def is_ordered([ head | tail]) do
     if head > List.first(tail) do
       false
     else
        is_ordered(tail)
     end
   end
 end 
