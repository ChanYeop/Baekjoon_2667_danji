# Baekjoon_2667_danji
## 문제
> 정사각형 모양의 지도가 있다. 1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다. 철수는 이 지도를 가지고 연결된 집들의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다. 여기서 연결되었다는 것은 어떤 집이 좌우, 혹은 아래위로 다른 집이 있는 경우를 말한다. 대각선상에 집이 있는 경우는 연결된 것이 아니다. <그림 2>는 <그림 1>을 단지별로 번호를 붙인 것이다. 지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

## 입력
> 첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

## 출력
> 첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.

## 알고리즘
> DFS의 알고리즘을 이용하여 프로그램을 구성하였다. 기존의 지도를 저장하는 map 이라는 배열과 갔는지를 판단하는 visit 배열을 이용하여 map이 1인 것과
동시에 visit를 하지 않았으면 dfs가 돌아가게 만들었다. dfs는 stack을 통해 구성하는 방법도 있지만 가독성을 판단했을 때 재귀로 구성하는게 더 좋다고
판단이 되어 재귀로 구성하였다. 이렇게 하여 위치가 map 안에 들어오는 조건일 때 dfs를 계속하여 돌려주면서 전체 단지 수와 단지 안에 있는 1의 수를 체크하여주었다.
