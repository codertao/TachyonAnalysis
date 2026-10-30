
void FUN_004603c0(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0045e310(*(undefined4 *)(param_1 + 0xe),DAT_0058b068);
  iVar1 = FUN_0045d680(*(undefined4 *)(param_1 + 0x12),*(undefined4 *)(DAT_0058b064 + 100));
  if (iVar1 != 0) {
    if ((param_1[1] != '\0') &&
       (iVar1 = FUN_0040b290(iVar1,*(undefined2 *)(param_1 + 0x16)), iVar1 == 0)) {
      return;
    }
    DAT_00565420 = DAT_0058b064;
    FUN_0048e930(param_1 + 2,local_c);
    FUN_0048e930(param_1 + 8,local_18);
    FUN_00498630(iVar1,*(undefined4 *)(param_1 + 0xe),*param_1,local_c,local_18,0);
  }
  return;
}

