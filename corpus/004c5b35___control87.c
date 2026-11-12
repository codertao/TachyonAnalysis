
/* CRT */

uint __control87(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  __hw_cw(uVar1);
  return uVar1;
}

