
undefined4 FUN_0043af70(RECT *param_1,RECT *param_2)

{
  int iVar1;
  int iVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  POINT pt_06;
  BOOL BVar3;
  
  if (param_1 == (RECT *)0x0) {
    return 1;
  }
  if (param_2 == (RECT *)0x0) {
    return 1;
  }
  pt_03.x = param_1->left;
  pt_03.y = param_1->top;
  BVar3 = PtInRect(param_2,pt_03);
  if (BVar3 != 0) {
    return 1;
  }
  pt.y = param_1->top;
  pt.x = param_1->right;
  BVar3 = PtInRect(param_2,pt);
  if (BVar3 != 0) {
    return 1;
  }
  pt_00.y = param_1->bottom;
  pt_00.x = param_1->left;
  BVar3 = PtInRect(param_2,pt_00);
  if (BVar3 != 0) {
    return 1;
  }
  pt_04.x = param_1->right;
  pt_04.y = param_1->bottom;
  BVar3 = PtInRect(param_2,pt_04);
  if (BVar3 != 0) {
    return 1;
  }
  pt_05.x = param_2->left;
  pt_05.y = param_2->top;
  BVar3 = PtInRect(param_1,pt_05);
  if (BVar3 != 0) {
    return 1;
  }
  pt_01.y = param_2->top;
  pt_01.x = param_2->right;
  BVar3 = PtInRect(param_1,pt_01);
  if (BVar3 != 0) {
    return 1;
  }
  pt_02.y = param_2->bottom;
  pt_02.x = param_2->left;
  BVar3 = PtInRect(param_1,pt_02);
  if (BVar3 != 0) {
    return 1;
  }
  pt_06.x = param_2->right;
  pt_06.y = param_2->bottom;
  BVar3 = PtInRect(param_1,pt_06);
  if (BVar3 != 0) {
    return 1;
  }
  iVar1 = param_1->top;
  iVar2 = param_2->top;
  if (iVar1 <= iVar2) {
    if (((iVar2 <= param_1->bottom) && (param_2->left <= param_1->left)) &&
       (param_1->right <= param_2->right)) {
      return 1;
    }
    if (iVar1 < iVar2) goto LAB_0043b052;
  }
  if (((iVar1 <= param_2->bottom) && (param_1->left <= param_2->left)) &&
     (param_2->right <= param_1->right)) {
    return 1;
  }
LAB_0043b052:
  if (param_1->left <= param_2->left) {
    if (((param_2->right <= param_1->right) && (iVar2 <= iVar1)) &&
       (param_1->bottom <= param_2->bottom)) {
      return 1;
    }
    if (param_1->left < param_2->left) {
      return 0;
    }
  }
  if (((param_1->right <= param_2->right) && (iVar1 <= iVar2)) &&
     (param_2->bottom <= param_1->bottom)) {
    return 1;
  }
  return 0;
}

