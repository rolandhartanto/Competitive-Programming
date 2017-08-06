Program transpose;
var
	a,b,c,d,e,f,g,h,i : longint;
procedure transpose(var a,b,c,d,e,f,g,h,i : longint);
begin
writeln(a,' ',d,' ',g);
writeln(b,' ',e,' ',h);
writeln(c,' ',f,' ',i);
end;
(*wwwwww
*)
begin
readln(a,b,c);
readln(d,e,f);
readln(g,h,i);
transpose(a,b,c,d,e,f,g,h,i);
end.