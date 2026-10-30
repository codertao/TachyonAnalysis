
void FUN_004ae5e0(char *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char local_11c [256];
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  size_t local_c;
  uint local_8;
  
  pcVar5 = (char *)*param_3;
  pcVar6 = (char *)0x0;
  local_14 = param_1;
  local_8 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((uVar3 != 0) && ((uVar4 = param_5[5], uVar4 != 0 && (uVar4 != uVar3)))) {
      local_18 = (int)((longlong)((ulonglong)uVar4 << 0x20) / (longlong)(int)uVar3);
      local_10 = *param_5;
    }
    *(undefined2 *)((int)param_3 + 6) = 0;
    local_c = 0;
    *pcVar5 = '\0';
    str_sprintf(local_11c,&DAT_005486d0);
    local_18 = FUN_004ae4c0(local_11c,param_2,param_4,param_5);
    pcVar7 = local_11c;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    uVar3 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_10 = ~uVar3 - 1;
    if (*param_1 != '\0') {
      local_1c = param_1 + 2;
      pcVar7 = param_1;
      do {
        param_1 = pcVar7 + 1;
        if (local_10 == 0) break;
        if (pcVar6 == (char *)0x0) {
          pcVar6 = local_14;
        }
        switch(*local_14) {
        case '\t':
        case ' ':
          local_11c[0] = '\0';
          _strncat(local_11c,pcVar6,local_c);
          local_c = FUN_004ae4c0(local_11c,param_2,param_4,param_5);
          if (local_8 + local_c < (uint)*(ushort *)(param_3 + 1)) {
            local_8 = local_c + local_18 + local_8;
            if (local_8 < *(ushort *)(param_3 + 1)) {
              uVar3 = 0xffffffff;
              pcVar6 = &DAT_005486d0;
              do {
                pcVar7 = pcVar6;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar7 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar7;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar2 = -1;
              pcVar6 = local_11c;
              do {
                pcVar9 = pcVar6;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                pcVar9 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar9;
              } while (cVar1 != '\0');
              pcVar6 = pcVar7 + -uVar3;
              pcVar7 = pcVar9 + -1;
              for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar7 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
              }
              uVar3 = 0xffffffff;
              pcVar6 = local_11c;
              do {
                pcVar7 = pcVar6;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar7 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar7;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar2 = -1;
              pcVar6 = pcVar5;
              do {
                pcVar9 = pcVar6;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                pcVar9 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar9;
              } while (cVar1 != '\0');
              pcVar6 = pcVar7 + -uVar3;
              pcVar7 = pcVar9 + -1;
              for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar7 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
              }
              local_c = 0;
              pcVar6 = param_1;
            }
            else {
              uVar3 = 0xffffffff;
              pcVar6 = local_11c;
              do {
                pcVar7 = pcVar6;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar7 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar7;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar2 = -1;
              pcVar6 = pcVar5;
              do {
                pcVar9 = pcVar6;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                pcVar9 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar9;
              } while (cVar1 != '\0');
              pcVar6 = pcVar7 + -uVar3;
              pcVar7 = pcVar9 + -1;
              for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar7 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
              }
              uVar3 = 0xffffffff;
              pcVar6 = pcVar5;
              do {
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              pcVar5 = pcVar5 + ~uVar3;
              *pcVar5 = '\0';
              *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
              local_8 = 0;
              local_c = 0;
              pcVar6 = param_1;
            }
          }
          else {
            uVar3 = 0xffffffff;
            pcVar6 = pcVar5;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            pcVar5 = pcVar5 + ~uVar3;
            uVar3 = 0xffffffff;
            *pcVar5 = '\0';
            pcVar6 = &DAT_005486d0;
            do {
              pcVar7 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = local_11c;
            do {
              pcVar9 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            pcVar6 = pcVar7 + -uVar3;
            pcVar7 = pcVar9 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            }
            uVar3 = 0xffffffff;
            pcVar6 = local_11c;
            do {
              pcVar7 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = pcVar5;
            do {
              pcVar9 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            pcVar6 = pcVar7 + -uVar3;
            pcVar7 = pcVar9 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            }
            *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
            local_8 = local_18 + local_c;
            local_c = 0;
            pcVar6 = param_1;
          }
          break;
        default:
          local_c = local_c + 1;
          break;
        case '\f':
          local_11c[0] = '\0';
          _strncat(local_11c,pcVar6,local_c);
          iVar2 = FUN_004ae4c0(local_11c,param_2,param_4,param_5);
          if (local_8 + iVar2 < (uint)*(ushort *)(param_3 + 1)) {
            uVar3 = 0xffffffff;
            pcVar6 = local_11c;
            do {
              pcVar7 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = pcVar5;
            do {
              pcVar9 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            pcVar7 = pcVar7 + -uVar3;
            pcVar9 = pcVar9 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar3 = uVar3 & 3; pcVar6 = param_1, uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
          }
          else {
            uVar3 = 0xffffffff;
            pcVar6 = pcVar5;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            pcVar5 = pcVar5 + ~uVar3;
            uVar3 = 0xffffffff;
            *pcVar5 = '\0';
            pcVar6 = &DAT_005486d0;
            do {
              pcVar7 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = local_11c;
            do {
              pcVar9 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            pcVar6 = pcVar7 + -uVar3;
            pcVar7 = pcVar9 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            }
            uVar3 = 0xffffffff;
            pcVar6 = local_11c;
            do {
              pcVar7 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = pcVar5;
            do {
              pcVar9 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            pcVar6 = pcVar7 + -uVar3;
            pcVar7 = pcVar9 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            }
            *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
            pcVar6 = param_1;
          }
          goto LAB_004aea83;
        case '\r':
          local_11c[0] = '\0';
          _strncat(local_11c,pcVar6,local_c);
          iVar2 = FUN_004ae4c0(local_11c,param_2,param_4,param_5);
          if (local_8 + iVar2 < (uint)*(ushort *)(param_3 + 1)) {
            uVar3 = 0xffffffff;
            pcVar6 = local_11c;
            do {
              pcVar9 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = pcVar5;
            do {
              pcVar8 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar8 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar8;
            } while (cVar1 != '\0');
            pcVar6 = pcVar9 + -uVar3;
            pcVar9 = pcVar8 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar9 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar9 = pcVar9 + 1;
            }
          }
          else {
            uVar3 = 0xffffffff;
            pcVar6 = pcVar5;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            pcVar5 = pcVar5 + ~uVar3;
            uVar3 = 0xffffffff;
            *pcVar5 = '\0';
            pcVar6 = &DAT_005486d0;
            do {
              pcVar9 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = local_11c;
            do {
              pcVar8 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar8 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar8;
            } while (cVar1 != '\0');
            pcVar6 = pcVar9 + -uVar3;
            pcVar9 = pcVar8 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar9 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar9 = pcVar9 + 1;
            }
            uVar3 = 0xffffffff;
            pcVar6 = local_11c;
            do {
              pcVar9 = pcVar6;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar9 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar9;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = -1;
            pcVar6 = pcVar5;
            do {
              pcVar8 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar8 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar8;
            } while (cVar1 != '\0');
            pcVar6 = pcVar9 + -uVar3;
            pcVar9 = pcVar8 + -1;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar9 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar9 = pcVar9 + 1;
            }
            *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
          }
          local_14 = local_14 + 1;
          param_1 = pcVar7 + 2;
          local_10 = local_10 + -1;
          pcVar6 = local_1c;
          local_1c = local_1c + 1;
LAB_004aea83:
          local_c = 0;
          uVar3 = 0xffffffff;
          pcVar7 = pcVar5;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + ~uVar3;
          *pcVar5 = '\0';
          *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
          local_8 = 0;
        }
        local_14 = local_14 + 1;
        local_1c = local_1c + 1;
        local_10 = local_10 + -1;
        pcVar7 = param_1;
      } while (*local_14 != '\0');
      if (local_c != 0) {
        local_11c[0] = '\0';
        _strncat(local_11c,pcVar6,local_c);
        iVar2 = FUN_004ae4c0(local_11c,param_2,param_4,param_5);
        if (local_8 + iVar2 < (uint)*(ushort *)(param_3 + 1)) {
          uVar3 = 0xffffffff;
          pcVar6 = local_11c;
          do {
            pcVar7 = pcVar6;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar7 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar2 = -1;
          pcVar6 = pcVar5;
          do {
            pcVar9 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar9 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar9;
          } while (cVar1 != '\0');
          pcVar6 = pcVar7 + -uVar3;
          pcVar7 = pcVar9 + -1;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          uVar3 = 0xffffffff;
          pcVar6 = pcVar5;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + ~uVar3;
          uVar3 = 0xffffffff;
          *pcVar5 = '\0';
          pcVar6 = &DAT_005486d0;
          do {
            pcVar7 = pcVar6;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar7 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar2 = -1;
          pcVar6 = local_11c;
          do {
            pcVar9 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar9 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar9;
          } while (cVar1 != '\0');
          pcVar6 = pcVar7 + -uVar3;
          pcVar7 = pcVar9 + -1;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          uVar3 = 0xffffffff;
          pcVar6 = local_11c;
          do {
            pcVar7 = pcVar6;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar7 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar2 = -1;
          pcVar6 = pcVar5;
          do {
            pcVar9 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar9 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar9;
          } while (cVar1 != '\0');
          pcVar6 = pcVar7 + -uVar3;
          pcVar7 = pcVar9 + -1;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
        }
        uVar3 = 0xffffffff;
        pcVar6 = pcVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcVar5[~uVar3] = '\0';
        *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
      }
    }
    *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
  }
  return;
}

