
/* CRT */

void __controlfp(undefined4 param_1,uint param_2)

{
  __control87(param_1,param_2 & 0xfff7ffff);
  return;
}

