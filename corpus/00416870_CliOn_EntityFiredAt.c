
/* S->C 0x1020 handler */

void CliOn_EntityFiredAt(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = Dcb_FindById(*(undefined4 *)(param_1 + 0xe));
  if (iVar1 != 0) {
    if ((param_1[1] != '\0') &&
       (iVar1 = FUN_0040b260(iVar1,*(undefined2 *)(param_1 + 0x16)), iVar1 == 0)) {
      return;
    }
    DAT_00565420 = 0;
    FUN_0048e930(param_1 + 2,local_c);
    FUN_0048e930(param_1 + 8,local_18);
    FUN_004666e0(0xc,0xf,0,iVar1,0x10000);
    Sapper_AttachServer(iVar1,*(undefined4 *)(param_1 + 0x12),*param_1,local_c,local_18,1);
  }
  return;
}

