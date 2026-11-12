
/* CRT */

undefined4 __fsopen(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __getstream();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = __openfile(param_1,param_2,param_3,iVar1);
  __unlock_file(iVar1);
  return uVar2;
}

