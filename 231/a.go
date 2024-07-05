package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func run(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	ans := 0
	solve := func() {

		arr := make([]int, 3)
		score := 0
		for idx := range arr {
			fmt.Fscan(in, &arr[idx])
			if(arr[idx] == 1) {score++}
		}
		if(score>1) {ans++}
		// sort.Ints(arr)
		// fmt.Fprintln(out, arr[2]-arr[0])
	}

	T := 1
	fmt.Fscan(in, &T)
	for i := 0; i < T; i++ {
		solve()
	}

		fmt.Fprintln(out, ans)
}

func main() {
	run(os.Stdin, os.Stdout)
}
