#include <stdio.h>
#include "list.h"

struct student_t
{
    int age;
    char name[20];
    struct LIST_HEAD_T list;
};

int main() {

    LIST_HEAD(student_list);
    struct student_t p1 = { 21, "hyun", };
    struct student_t p2 = { 22, "cs", };
    struct LIST_HEAD_T* temp;
    struct student_t* p;

    list_add(&p1.list, &student_list);
    list_add(&p2.list, &student_list);


    //for( temp = head.prev; temp != &head; temp = temp->prev ) 
    list_for_each(temp, &student_list)
    {
        p = list_entry(temp, struct student_t, list);
        printf("name:%s, age:%d\n", p->name, p->age);
    }

	return 0;
}

/** ���� 1
���� ���� ���α׷��� �Ʒ��� ���� ������ �����ϵ��� �����ϼ���.
1. 10���� �л� ������ ���� �޸� �Ҵ��� �̿��Ͽ� ����Ʈ�� �߰��ϼ���.
2. list_add() �Լ��� �̿��Ͽ� student_list�� �߰�
3. list_for_each() ��ũ�θ� �̿��Ͽ� ����Ʈ�� �����ϴ� ��� �л� ������ ����ϰ� list_for_each{} ������ �Ҵ�� �޸𸮸� �����ϼ���.
4. �޸𸮰� �� �ݳ��Ǵ��� Ȯ���ϰ�, ����� �ݳ��� ���� �ʾҴٸ� �̸� �ذ��ϼ���.
*/

/** ���� 2
1. 10���� �л������� ���� ���� �迭�� �����ϼ���.
2. ���� ������ ���� �迭���� �� �迭 ��Ҹ� �Ҵ��ϴ� �Լ��� �ۼ��ϼ���.
3. 2���� ������ �Լ��� �̿��Ͽ� ���� 1�� ���� �޸� �Ҵ� �κ��� ��ü�ϼ���.
*/
