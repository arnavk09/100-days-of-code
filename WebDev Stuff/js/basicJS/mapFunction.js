// let num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// let doubles = num.map(function (num) {
//     return ((num) * 2)
// })

const movies = [
    {
        title: "Amadeus",
        score: 99
    },
    {
        title: "Stand By Me",
        score: 85
    },
    {
        title: "Parasite",
        score: 90
    },
]

let movieRender = movies.map(function (movie) {
   console.log((`${movie.title.toUpperCase()}`)); 
})