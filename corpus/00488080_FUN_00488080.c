
void FUN_00488080(void)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  char local_2bc [512];
  int local_bc;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  code *local_90;
  undefined4 local_8;
  
  local_2cc = 0xc0;
  local_2c8 = 0x19;
  local_2c4 = 0x1bf;
  local_2c0 = 0x2c;
  puVar1 = (undefined4 *)FUN_004699f0(s_SLOT_TICKER_005581e0);
  iVar2 = FUN_0043ba90(&DAT_00583420,s_LCD10tickerb_005581d0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &local_2cc;
  }
  FUN_0048d0a0(puVar1);
  FUN_0048d1f0(0xffffffff,0);
  if (iVar2 != 0) {
    pcVar6 = local_2bc;
    for (iVar5 = 0xaf; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    local_90 = FUN_00488080;
    iVar5 = 2;
    local_8 = 2;
    local_b2 = *(undefined1 *)(iVar2 + 0xb0);
    local_b3 = *(undefined1 *)(iVar2 + 0xb4);
    local_b4 = *(undefined1 *)(iVar2 + 0xb8);
    local_af = *(undefined1 *)(iVar2 + 0xfc);
    local_b0 = *(undefined1 *)(iVar2 + 0x100);
    local_b1 = *(undefined1 *)(iVar2 + 0x104);
    local_bc = iVar2;
    DVar3 = GetTickCount();
    FUN_004bcda0(DVar3);
    do {
      uVar4 = _rand();
      uVar4 = uVar4 & 0x8000007f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffff80) + 1;
      }
      str_sprintf(&DAT_005a41e0,s_SLOT_TICKER__d_005581c0,uVar4);
      iVar2 = FUN_0043bf10(&DAT_00583420,&DAT_005a41e0);
      if (iVar2 != 0) {
        if (uVar4 != DAT_00557e90) break;
        iVar2 = 0;
      }
      iVar5 = iVar5 + -1;
      uVar4 = DAT_00557e90;
    } while (0 < iVar5);
    DAT_00557e90 = uVar4;
    if (iVar2 == 0) {
      pcVar6 = s___________________________________0055818c;
    }
    else {
      pcVar6 = *(char **)(iVar2 + 0x40);
    }
    _strncpy(local_2bc,pcVar6,0x1ff);
    FUN_0048d280(local_2bc);
  }
  return;
}

