
void FUN_0049a480(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_10c;
  int local_104;
  char local_100 [256];
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x28);
  do {
    if (iVar3 == 0) {
      return;
    }
    local_104 = *(int *)(iVar8 + 0xc);
    if (local_104 != 0) {
      puVar5 = *(undefined4 **)(iVar8 + 0x18);
      do {
        if (puVar5 == (undefined4 *)0x0) break;
        local_10c = FUN_0049a110(param_1,iVar8,puVar5);
        puVar5[3] = local_10c;
        if (local_10c != 0) {
          iVar6 = 1;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_10c;
          do {
            if (iVar6 == 1) {
              Cbin_FindParam(*puVar5,local_100,0x100,0,4,1);
            }
            else {
              Cbin_GetParamN_Ctx(*puVar5,local_100,0x100,0,4,iVar6,param_1);
            }
            iVar2 = FUN_00499be0(local_100);
            if (iVar2 == 0) {
              uVar4 = 0xffffffff;
              pcVar7 = local_100;
              do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + ~uVar4;
            }
            iVar6 = iVar6 + 1;
            local_10c = local_10c + -1;
          } while (local_10c != 0);
        }
        puVar5 = puVar5 + 5;
        local_104 = local_104 + -1;
      } while (local_104 != 0);
    }
    iVar8 = iVar8 + 0x1c;
    iVar3 = iVar3 + -1;
  } while( true );
}

