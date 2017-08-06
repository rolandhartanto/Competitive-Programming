Program cariprima;
var
	N, i : integer;{s.d.1.000}
	B : longint;{s.d. 1.000.000}
	
function prime(x: longint):boolean;
var
	j,  count : longint;
begin
count:=0;
if x = 1 then
begin
count:=1;
end

else
begin
for j:=1 to trunc(sqrt(x)) do 
	begin
	if (x mod j)=0 then
		count:=count+2;
	if count>4 then
		break;
	end;
end;	
	if count>4 then
		begin
		prime:=false;
		end
	else if (count<=4) or (count>1) then
		begin
		prime:=true;
		end;
end;

begin
readln(N);
for i:=1 to N do 
	begin
	readln(B);
	if (prime(B)) then
		writeln('YA')
	else
		writeln('BUKAN');
	end;
end.