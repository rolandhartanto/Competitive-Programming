Program faktor;
var
	N, i : longint;
begin
readln(N);
for i:=N downto 1 do 
begin
	if (N mod i)=0 then
	begin
		writeln(i);
	end
	else
	begin
		continue;
	end;
end;
end.