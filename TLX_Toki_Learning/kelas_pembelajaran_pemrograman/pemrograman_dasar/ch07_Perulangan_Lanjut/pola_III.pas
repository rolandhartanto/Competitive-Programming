Program pola3;
var
	N, a, i, j : integer;
begin
readln(N);
a:=0;
for i:=1 to N do
	begin
		for j:=1 to i do 
			begin
			write(a);
			if a=9 then
				a:=-1;
				
			a:=a+1;
			end;
		writeln();
	end;
end.