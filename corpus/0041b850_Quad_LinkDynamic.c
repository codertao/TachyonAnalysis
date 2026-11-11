
/* push ent onto ent->quadrant->dynamicList */

void __cdecl Quad_LinkDynamic(SpED *ent)

{
  List_PushFront(ent,&ent->quadrant->dynamicList);
  return;
}

