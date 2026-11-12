
/* joyGetPosEx wrapper (flight stick) */

void Input_PollJoystick(int param_1)

{
  uint uVar1;
  int iVar2;
  MMRESULT MVar3;
  int iVar4;
  DWORD *pDVar5;
  joyinfoex_tag *pjVar6;
  joyinfoex_tag local_144;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  byte bStack_e4;
  byte bStack_e3;
  byte bStack_e2;
  byte bStack_e1;
  
  if (param_1 != 0) {
    Joy_ResetState(param_1);
    if (*(int *)(param_1 + 8) == 1) {
      if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
        iVar2 = Joy_ReadAxis(param_1);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(**(int **)(param_1 + 100) + 100))(*(int **)(param_1 + 100));
          if (-1 < iVar2) {
            pDVar5 = &local_144.dwReserved2;
            for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pDVar5 = 0;
              pDVar5 = pDVar5 + 1;
            }
            uStack_10c = 0;
            uStack_f4 = 0xffff;
            uStack_f0 = 0xffff;
            uStack_ec = 0xffff;
            uStack_e8 = 0xffff;
            local_144.dwReserved2 = 0x8000;
            uStack_110 = 0x8000;
            uStack_100 = 0x8000;
            uStack_fc = 0x8000;
            uStack_f8 = 0x8000;
            iVar2 = (**(code **)(**(int **)(param_1 + 100) + 0x24))
                              (*(int **)(param_1 + 100),0x110,&local_144.dwReserved2);
            if (-1 < iVar2) {
              if ((uStack_f0 & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1;
              }
              if ((uStack_f0 & 0x8000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
              }
              if ((uStack_f0 & 0x800000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
              }
              if ((uStack_f0 & 0x80000000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
              }
              if ((uStack_ec & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x10;
              }
              if ((uStack_ec & 0x8000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20;
              }
              if ((uStack_ec & 0x800000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x40;
              }
              if ((uStack_ec & 0x80000000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
              }
              if ((uStack_e8 & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x100;
              }
              if ((uStack_e8 & 0x8000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
              }
              if ((uStack_e8 & 0x800000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x400;
              }
              if ((uStack_e8 & 0x80000000) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x800;
              }
              if ((bStack_e4 & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x1000;
              }
              if ((bStack_e3 & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x2000;
              }
              if ((bStack_e2 & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x4000;
              }
              if ((bStack_e1 & 0x80) != 0) {
                *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x8000;
              }
              *(DWORD *)(param_1 + 0x40) = local_144.dwPOV;
              uVar1 = *(uint *)(param_1 + 0x38);
              *(DWORD *)(param_1 + 0x3c) = local_144.dwButtonNumber;
              if ((uVar1 & 2) != 0) {
                *(DWORD *)(param_1 + 0x44) = local_144.dwReserved1;
              }
              if ((uVar1 & 4) != 0) {
                *(undefined4 *)(param_1 + 0x48) = uStack_10c;
              }
              if ((uVar1 & 8) != 0) {
                *(undefined4 *)(param_1 + 0x4c) = uStack_100;
              }
              if ((uVar1 & 0x10) != 0) {
                *(undefined4 *)(param_1 + 0x50) = uStack_fc;
              }
              if ((uVar1 & 0x20) != 0) {
                *(undefined4 *)(param_1 + 0x54) = uStack_f8;
              }
              if ((uVar1 & 0x40) != 0) {
                *(undefined4 *)(param_1 + 0x58) = uStack_f4;
                return;
              }
            }
          }
        }
      }
    }
    else if (*(int *)(param_1 + 8) == 2) {
      iVar2 = *(int *)(param_1 + 0x68);
      pjVar6 = &local_144;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        pjVar6->dwSize = 0;
        pjVar6 = (joyinfoex_tag *)&pjVar6->dwFlags;
      }
      local_144.dwButtons = 0;
      local_144.dwRpos = 0x8000 - iVar2;
      local_144.dwZpos = 0xffff;
      local_144.dwPOV = 0xffff;
      local_144.dwSize = 0x34;
      local_144.dwFlags = 0x4ff;
      local_144.dwXpos = 0x8000;
      local_144.dwYpos = 0x8000;
      local_144.dwUpos = 0x8000;
      local_144.dwVpos = 0x8000;
      MVar3 = joyGetPosEx(*(UINT *)(param_1 + 0x34),&local_144);
      if (MVar3 != 0) {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = uVar1 | 1;
      if ((local_144.dwButtons & 1) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1;
      }
      if ((local_144.dwButtons & 2) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
      }
      if ((local_144.dwButtons & 4) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
      }
      if ((local_144.dwButtons & 8) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
      }
      if ((local_144.dwButtons & 0x10) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x10;
      }
      if ((local_144.dwButtons & 0x20) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20;
      }
      if ((local_144.dwButtons & 0x40) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x40;
      }
      if ((local_144.dwButtons & 0x80) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
      }
      if ((local_144.dwButtons & 0x100) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x100;
      }
      if ((local_144.dwButtons & 0x200) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
      }
      if ((local_144.dwButtons & 0x400) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x400;
      }
      if ((local_144.dwButtons & 0x800) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x800;
      }
      if ((local_144.dwButtons & 0x1000) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x1000;
      }
      if ((local_144.dwButtons & 0x2000) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x2000;
      }
      if ((local_144.dwButtons & 0x4000) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x4000;
      }
      if ((local_144.dwButtons & 0x8000) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x8000;
      }
      *(DWORD *)(param_1 + 0x3c) = local_144.dwXpos;
      *(DWORD *)(param_1 + 0x40) = local_144.dwYpos;
      if ((uVar1 & 2) != 0) {
        *(DWORD *)(param_1 + 0x44) = local_144.dwZpos;
      }
      if ((uVar1 & 4) != 0) {
        *(DWORD *)(param_1 + 0x48) = local_144.dwRpos + *(int *)(param_1 + 0x68);
      }
      if ((uVar1 & 8) != 0) {
        *(DWORD *)(param_1 + 0x4c) = local_144.dwPOV;
      }
    }
  }
  return;
}

