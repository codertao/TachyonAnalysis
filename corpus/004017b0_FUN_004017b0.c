
bool FUN_004017b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_3 + 0xc)) {
  case 0:
    iVar1 = FUN_00405990(param_1,param_2,*(undefined4 *)(param_3 + 0x10));
    return iVar1 == 0;
  case 1:
    FUN_00436dd0(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),0,1,*(undefined4 *)(param_1 + 100)
                );
    return true;
  case 2:
    FUN_00436b30(param_1,1,0);
    return true;
  case 3:
    break;
  case 4:
    FUN_00436b30(param_1,0x18,0);
  default:
    return true;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    FUN_00436b30(param_1,2,*(undefined4 *)(param_3 + 0x10));
    return true;
  }
  FUN_00402490(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x54),*(undefined4 *)(param_3 + 0x10),0,
               *(undefined4 *)(param_1 + 100));
  return true;
}

