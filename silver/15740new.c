#include <stdio.h>

int main()
{

    char num_a[100] = "19283746564738291828374658492190203821743674268423148347343187";

    char num_b[100] = "6459673984658736478136478126129038124728952734589374823641782481";

    char num_a_[100];

    char num_b_[100];

    char result[101] = ""; // 이거 초기화 안해주면 결과 뒤에 이상한게 붙는다

    int carry = 0;

    int sum = 0;

    int i = 0;

    for (i = sizeof(num_a_) - 2; i >= 0; i--)
    {

        // 각 자리는 아스키 코드표의 숫자로 처리, '0' 을 빼면 문자로서의 값이 된다

        // 다시 결과배열에 넣을때는 반대로 '0' 을 더해줘야 문자가 됨

        sum = (num_a_[i] - '0') + (num_b_[i] - '0') + carry;

        carry = sum / 10;

        sum = sum % 10;

        result[i + 1] = sum + '0';
    }

    result[0] = carry + '0';

    for (i = 0; result[i] == '0'; i++)
        ;

    printf("%s\n", result + i); // 배열 시작주소 + i칸. 여기서 i를 써먹기 위해서는 i를 위에서 선언

    return 0;
}
