
void FUN_004bf5a3(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_004bd7a3((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_00561464 < 2) {
        uVar4 = (byte)PTR_DAT_00561258[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_004bc62d((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_00561468;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

