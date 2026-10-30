
void FUN_00450990(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_80 [2];
  char local_78 [104];
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0048e380(local_80,0x80);
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = local_78;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  local_80[0] = param_3;
  local_10 = param_4;
  if (param_4 == 0) {
    local_c = 0xc;
    local_8 = 2;
    local_4 = 0xc;
  }
  iVar2 = FUN_004508a0(local_80,&DAT_005b3220);
  if (iVar2 != 0) {
    if (param_3 == 8) {
      DAT_0058f488 = 1;
    }
    *(undefined4 *)(iVar2 + 0x98) = param_2;
  }
  return;
}

