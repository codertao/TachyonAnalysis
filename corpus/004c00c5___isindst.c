
/* CRT */

undefined4 __isindst(undefined4 param_1)

{
  undefined4 uVar1;
  
  __lock(0xb);
  uVar1 = __isindst_lk(param_1);
  __unlock(0xb);
  return uVar1;
}

