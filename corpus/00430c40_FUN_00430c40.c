
void FUN_00430c40(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined2 local_174;
  undefined1 local_172;
  undefined4 local_170;
  undefined4 local_16c [2];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_158;
  char local_100 [128];
  undefined4 local_80 [32];
  
  local_174 = DAT_0053ebb4;
  local_172 = DAT_0053ebb6;
  iVar2 = FUN_00430a70(param_1);
  if (iVar2 != 0) {
    local_170 = FUN_004a0d40(1);
    uVar3 = FUN_00430910(local_16c);
    iVar2 = Cbin_LoadFile(uVar3);
    if (iVar2 != 0) {
      local_164 = local_16c[0];
      local_160 = 0;
      local_158 = 0;
      uVar3 = FUN_00430910();
      iVar2 = FUN_004a0d60(uVar3);
      if (iVar2 != -1) {
        iVar4 = FUN_0049aed0(local_100,0x80,local_16c);
        while (iVar4 != 0) {
          pcVar6 = local_100;
          puVar7 = local_80;
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            puVar7 = puVar7 + 1;
          }
          FUN_004bcef7(local_80,&local_174);
          iVar4 = FUN_004bcef7(0,&local_174);
          FUN_00430c00(iVar4);
          if (iVar4 == 0) {
            uVar5 = 0xffffffff;
            pcVar6 = local_100;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
LAB_00430d80:
            FUN_00430b70(iVar2,local_100,~uVar5);
          }
          else {
            iVar4 = FUN_004c67c0(iVar4,param_1);
            if (iVar4 != 0) {
              uVar5 = 0xffffffff;
              pcVar6 = local_100;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              goto LAB_00430d80;
            }
          }
          iVar4 = FUN_0049aed0(local_100,0x80,local_16c);
        }
      }
      FUN_0049adb0(local_16c);
    }
    FUN_004a0ec0();
    FUN_004a0d40(local_170);
  }
  return;
}

