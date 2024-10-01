<div id="top"></div>

<div align="center">
	<a href="https://github.com/Link-Wolf/push_swap" title="Go to GitHub repo"><img src="https://img.shields.io/static/v1?label=Link-Wolf&message=push_swap&color=blue&logo=github&style=for-the-badge" alt="Link-Wolf - push_swap"></a>
	<a href="https://"><img src="https://img.shields.io/badge/42_grade-121_%2F_100-brightgreen?style=for-the-badge" alt="42 grade - 121 / 100"></a>
	<a href="https://"><img src="https://img.shields.io/badge/Year-2022-ffad9b?style=for-the-badge" alt="Year - 2022"></a>
	<a href="https://github.com/Link-Wolf/push_swap/stargazers"><img src="https://img.shields.io/github/stars/Link-Wolf/push_swap?style=for-the-badge&color=yellow" alt="stars - push_swap"></a>
	<a href="https://github.com/Link-Wolf/push_swap/network/members"><img src="https://img.shields.io/github/forks/Link-Wolf/push_swap?style=for-the-badge&color=lightgray" alt="forks - push_swap"></a>
	<a href="https://github.com/Link-Wolf/push_swap/issues"><img src="https://img.shields.io/github/issues/Link-Wolf/push_swap?style=for-the-badge&color=orange" alt="issues - push_swap"></a>
	<a href="https://www.apple.com/macos/" title="Go to Apple homepage"><img src="https://img.shields.io/badge/OS-macOS-blue?logo=apple&logoColor=white&style=for-the-badge&color=9cf" alt="OS - macOS"></a>
</div>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a>
    <img src="https://www.42mulhouse.fr/wp-content/uploads/2022/06/logo-42-Mulhouse-white.svg" alt="Logo" width="192" height="80">
  </a>

  <h3 align="center">Push_swap</h3>

  <p align="center">
	  <em>Because Swap_push isn’t as natural</em><br/>
    Optimized data sorting on stacks
    <br />
    <br />
    <a href="https://github.com/Link-Wolf/push_swap/issues">Report Bug</a>
    ·
    <a href="https://github.com/Link-Wolf/push_swap/issues">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->

## About The Project

<div>
<p>
  <a>
    <img src="assets/push_swap.webp" alt="push_swap illustration">
  </a>
  </p>
</div>

This project is a very simple and highly effective algorithm project: data will
need to be sorted. </br>
We have at our disposal, 2 stacks (`a` and `b`), a set of int values without duplicates that will be initialized in the stack `a`, and a set of instructions to manipulate both stacks :

-   `ra` / `rb` rotates either `a` or `b`
-   `rra` / `rrb` rotates either `a` or `b` but in the other direction
-   `rr` / `rrr` rotates both `a` and `b` in one direction or the other
-   `pa` pushes the top element of `b` to `a`
-   `pb` pushes the top element of `a` to `b`
-   `sa` / `sb` switches the two top elements of `a` / `b`
-   `ss` switches the two top elements of both `a` and `b`

The program should then print in the terminal all the instructions to sort the int values into the stack `a`, by using the stack `b`

The evaluation is made according to the performance of the program (how many operations the program print to sort the stack `a`)

### Bonus features

Make a "Checker" which will get as an argument the stack `a` formatted as a list of integers (in the same way as the push_swap program)

The program will then wait and read instructions on the standard input.
Once all the instructions have been read, the checker will execute them on the stack received as an argument and print `OK` only if the stack `a` is correctly sorted, `KO` otherwise.

We can call the push_swap program then pipe `|` the checker with the same arguments to verify if our push_swap works as intended

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- GETTING STARTED -->

## Getting Started

Because it's a simple C program, there isn't much to say here

### Prerequisites

Having a C compiler like cc, gcc or clang

### Installation

1. Clone the repo
    ```sh
    git clone https://github.com/Link-Wolf/push_swap.git
    ```
2. Compile push_swap
    ```sh
    cd push_swap; make
    ```
3. Execute the program with a list of integers as a parameter / multiples parameters
    ```sh
    ./push_swap "5 648 1 36 -1 98 -364 0"
    ```
    or
    ```sh
    ./push_swap 5 648 1 36 -1 98 -364 0
    ```

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- USAGE EXAMPLES -->

## Usage

Test this push_swap with the integers you want, and with as many you want !

#### Push swap program

```sh
   ./push_swap "5 1 -1 -3 0"
```

#### Possible output

```
	pb
	pb
	sa
	pa
	ra
	pa
	ra
```

#### Checker program

```sh
   ./push_swap "5 1 -1 -3 0" | ./checker "5 1 -1 -3 0"
```

#### Output

```
	OK
```

_The checker will print `Error` if one of the given instructions does not exist_

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- ROADMAP -->

## Roadmap

-   [x] Add the checker
-   [x] Add back to top links

See the [open issues](https://github.com/Link-Wolf/push_swap/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTRIBUTING -->

## Contributing

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>
