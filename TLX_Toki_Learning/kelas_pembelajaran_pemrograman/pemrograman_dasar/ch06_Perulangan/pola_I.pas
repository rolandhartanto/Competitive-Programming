Program polaI;
var
	N, K, i : integer;
begin
readln(N,K);
for i:=1 to N do
	begin
	if (i mod K) = 0 then
		begin
		if i=N then
			begin
			writeln('*');
			end
		else
			begin
			write('* ');
			end;
		end
	else
		begin
		if i=N then
			begin
			writeln(i);
			end
		else
			begin
			write(i,' ');
			end;
		end;
	end;
end.