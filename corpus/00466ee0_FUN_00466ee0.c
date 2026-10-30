
void FUN_00466ee0(code *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_1 != (code *)0x0) {
    uVar3 = 0;
    puVar2 = DAT_0058979c;
    if (DAT_00589798 != 0) {
      do {
        uVar1 = FUN_004a8400(puVar2[2],&DAT_00589788);
        (*param_1)(puVar2[2],uVar1,*puVar2);
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 3;
      } while (uVar3 < DAT_00589798);
    }
  }
  return;
}

