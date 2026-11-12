
/* [tentative] */

undefined4 c_fprintf(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  __lock_file(param_1);
  uVar1 = __stbuf(param_1);
  uVar2 = Crt_Output(param_1,param_2,&stack0x0000000c);
  __ftbuf(uVar1,param_1);
  __unlock_file(param_1);
  return uVar2;
}

