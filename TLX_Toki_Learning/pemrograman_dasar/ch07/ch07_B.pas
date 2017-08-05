Program pola2;
var
	N, i, j : integer;
begin
readln(N);
for i:=1 to N do 
	begin
		for j:=1 to (N-i) do
			begin
			write(' ');
			end;
		for j:=1 to i do 
			begin
			if j=i then
				begin
				writeln('*');
				end
			else
				begin
				write('*');
				end;
			end;
	end;
end.